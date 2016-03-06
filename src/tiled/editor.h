/*
 * editor.h
 * Copyright 2016, Thorbjørn Lindeijer <bjorn@lindijer.nl>
 *
 * This file is part of Tiled.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TILED_INTERNAL_EDITOR_H
#define TILED_INTERNAL_EDITOR_H

#include <QObject>

namespace Tiled {
namespace Internal {

class Document;

class Editor : public QObject
{
    Q_OBJECT

public:
    explicit Editor(QObject *parent = nullptr);

    virtual void addDocument(Document *document) = 0;
    virtual void removeDocument(Document *document) = 0;

    virtual void setCurrentDocument(Document *document) = 0;
    virtual Document *currentDocument() const = 0;

    virtual QWidget *editorWidget() const = 0;

signals:

public slots:
};

} // namespace Internal
} // namespace Tiled

#endif // TILED_INTERNAL_EDITOR_H