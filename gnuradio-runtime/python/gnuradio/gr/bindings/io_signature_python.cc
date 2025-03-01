/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(io_signature.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(fe931f4f10b5b363b55e9ae43c178b7a)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/io_signature.h>
// pydoc.h is automatically generated in the build directory
#include <io_signature_pydoc.h>

void bind_io_signature(py::module& m)
{

    using io_signature = ::gr::io_signature;


    py::class_<io_signature, std::shared_ptr<io_signature>>(
        m, "io_signature", D(io_signature))

        .def(py::init(&io_signature::make),
             py::arg("min_streams"),
             py::arg("max_streams"),
             py::arg("sizeof_stream_item"),
#ifdef FORCE_SINGLE_MAPPED
             py::arg("buftype") = gr::host_buffer::type,
#else
             py::arg("buftype") = gr::buffer_double_mapped::type,
#endif
             D(io_signature, make))


        .def_static("make2",
                    &io_signature::make2,
                    py::arg("min_streams"),
                    py::arg("max_streams"),
                    py::arg("sizeof_stream_item1"),
                    py::arg("sizeof_stream_item2"),
#ifdef FORCE_SINGLE_MAPPED
                    py::arg("buftype1") = gr::host_buffer::type,
                    py::arg("buftype2") = gr::host_buffer::type,
#else
                    py::arg("buftype1") = gr::buffer_double_mapped::type,
                    py::arg("buftype2") = gr::buffer_double_mapped::type,
#endif
                    D(io_signature, make2))


        .def_static("make3",
                    &io_signature::make3,
                    py::arg("min_streams"),
                    py::arg("max_streams"),
                    py::arg("sizeof_stream_item1"),
                    py::arg("sizeof_stream_item2"),
                    py::arg("sizeof_stream_item3"),
#ifdef FORCE_SINGLE_MAPPED
                    py::arg("buftype1") = gr::host_buffer::type,
                    py::arg("buftype2") = gr::host_buffer::type,
                    py::arg("buftype3") = gr::host_buffer::type,
#else
                    py::arg("buftype1") = gr::buffer_double_mapped::type,
                    py::arg("buftype2") = gr::buffer_double_mapped::type,
                    py::arg("buftype3") = gr::buffer_double_mapped::type,
#endif
                    D(io_signature, make3))

        .def_static(
            "makev",
            py::overload_cast<int, int, const std::vector<int>&>(&io_signature::makev),
            py::arg("min_streams"),
            py::arg("max_streams"),
            py::arg("sizeof_stream_items"),
            D(io_signature, makev))

        .def_static("makev",
                    py::overload_cast<int,
                                      int,
                                      const std::vector<int>&,
                                      gr::gr_vector_buffer_type>(&io_signature::makev),
                    py::arg("min_streams"),
                    py::arg("max_streams"),
                    py::arg("sizeof_stream_items"),
                    py::arg("buftypes"),
                    D(io_signature, makev))


        .def("min_streams", &io_signature::min_streams, D(io_signature, min_streams))


        .def("max_streams", &io_signature::max_streams, D(io_signature, max_streams))


        .def("sizeof_stream_item",
             &io_signature::sizeof_stream_item,
             py::arg("index"),
             D(io_signature, sizeof_stream_item))


        .def("sizeof_stream_items",
             &io_signature::sizeof_stream_items,
             D(io_signature, sizeof_stream_items))

        ;
}
