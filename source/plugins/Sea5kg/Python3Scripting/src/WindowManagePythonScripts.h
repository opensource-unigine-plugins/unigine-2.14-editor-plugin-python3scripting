#pragma once

#include <QDialog>
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QListView>
#include <QStringList>
#include <QStandardItemModel>
#include <QAbstractItemView>
#include <QComboBox>
#include <QListWidget>
#include <QStringListModel>

#include "Python3ScriptInfo.h"
#include "interfaces/IManagePythonScripts.h"

// https://www.walletfox.com/course/qtcheckablelist.php

class CustomListModel : public QStringListModel {
    public:
        CustomListModel(QObject* parent = 0);
        CustomListModel(const QStringList & strings, QObject* parent = 0);
        Qt::ItemFlags flags (const QModelIndex& index) const;
        QVariant data(const QModelIndex &index, int role) const;
        bool setData(const QModelIndex &index, const QVariant &value,
                    int role);
        void save();
    private:
        QSet<QPersistentModelIndex> checkedItems;
};

class WindowManagePythonScripts : public QDialog {
    Q_OBJECT
public:
    WindowManagePythonScripts(QWidget *parent, QVector<Python3ScriptInfo *> *vScripts, IManagePythonScripts *pManageScripts);
    QString makeName(Python3ScriptInfo *pModel);
    void reloadList();
    void selectedItem(Python3ScriptInfo *pModel);

signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void removeClicked();
    void createClicked();
    void editClicked();
    void enableOrDisableClicked();
    void selectionChanged();

private:
    QWidget *m_pParent;
    IManagePythonScripts *m_pManageScripts;
    void createListWidget();
    QVector<Python3ScriptInfo *> *m_vScripts;
    QLineEdit *m_pLineEditSearch;
    QListWidget *m_pListWidget;
    QPushButton *m_pCreateButton;
    QPushButton *m_pEditButton;
    QPushButton *m_pEnableButton;
    QPushButton *m_pRemoveButton;
    QPushButton *m_pCloseButton;
};

