# Available instance layers:
- VK_LAYER_NV_optimus
- VK_LAYER_OBS_HOOK
- VK_LAYER_VALVE_steam_overlay
- VK_LAYER_VALVE_steam_fossilize
- VK_LAYER_EOS_Overlay
- VK_LAYER_EOS_Overlay
- VK_LAYER_LUNARG_api_dump
- VK_LAYER_LUNARG_device_simulation
- VK_LAYER_LUNARG_gfxreconstruct
- VK_LAYER_KHRONOS_synchronization2
- VK_LAYER_KHRONOS_validation
- VK_LAYER_LUNARG_monitor
- VK_LAYER_LUNARG_screenshot

# Available extensions:
- VK_KHR_surface
- VK_KHR_win32_surface
- VK_KHR_external_memory_capabilities
- VK_KHR_external_semaphore_capabilities
- VK_KHR_external_fence_capabilities
- VK_KHR_get_physical_device_properties2
- VK_KHR_get_surface_capabilities2
- VK_KHR_device_group_creation
- VK_EXT_swapchain_colorspace
- VK_KHR_display
- VK_KHR_get_display_properties2
- VK_KHR_surface_protected_capabilities
- VK_EXT_debug_report
- VK_EXT_debug_utils
- VK_EXT_direct_mode_display
- VK_NV_external_memory_capabilities

# Api Dump:
```
Thread 0, Frame 1327:
vkWaitForFences(device, fenceCount, pFences, waitAll, timeout) returns VkResult VK_SUCCESS (0):
    device:                         VkDevice = 000002781CA434A0
    fenceCount:                     uint32_t = 1
    pFences:                        const VkFence* = 0000027821712458
        pFences[0]:                     const VkFence = 686F310000000034
    waitAll:                        VkBool32 = 1
    timeout:                        uint64_t = 18446744073709551615

Thread 0, Frame 1327:
vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex) returns VkResult VK_SUCCESS (0):
    device:                         VkDevice = 000002781CA434A0
    swapchain:                      VkSwapchainKHR = 0983E60000000003
    timeout:                        uint64_t = 18446744073709551615
    semaphore:                      VkSemaphore = 042BF70000000032
    fence:                          VkFence = 0000000000000000
    pImageIndex:                    uint32_t* = 1

Thread 0, Frame 1327:
vkMapMemory(device, memory, offset, size, flags, ppData) returns VkResult VK_SUCCESS (0):
    device:                         VkDevice = 000002781CA434A0
    memory:                         VkDeviceMemory = AB46AD0000000028
    offset:                         VkDeviceSize = 0
    size:                           VkDeviceSize = 192
    flags:                          VkMemoryMapFlags = 0
    ppData:                         void** = 000002781DDFFC00

Thread 0, Frame 1327:
vkUnmapMemory(device, memory) returns void:
    device:                         VkDevice = 000002781CA434A0
    memory:                         VkDeviceMemory = AB46AD0000000028

Thread 0, Frame 1327:
vkWaitForFences(device, fenceCount, pFences, waitAll, timeout) returns VkResult VK_SUCCESS (0):
    device:                         VkDevice = 000002781CA434A0
    fenceCount:                     uint32_t = 1
    pFences:                        const VkFence* = 0000027821712498
        pFences[0]:                     const VkFence = 364D940000000031
    waitAll:                        VkBool32 = 1
    timeout:                        uint64_t = 18446744073709551615

Thread 0, Frame 1327:
vkResetFences(device, fenceCount, pFences) returns VkResult VK_SUCCESS (0):
    device:                         VkDevice = 000002781CA434A0
    fenceCount:                     uint32_t = 1
    pFences:                        const VkFence* = 0000027821712458
        pFences[0]:                     const VkFence = 686F310000000034

Thread 0, Frame 1327:
vkQueueSubmit(queue, submitCount, pSubmits, fence) returns VkResult VK_SUCCESS (0):
    queue:                          VkQueue = 00000278213DFAA0
    submitCount:                    uint32_t = 1
    pSubmits:                       const VkSubmitInfo* = 000000E75556F400
        pSubmits[0]:                    const VkSubmitInfo = 000000E75556F400:
            sType:                          VkStructureType = VK_STRUCTURE_TYPE_SUBMIT_INFO (4)
            pNext:                          const void* = NULL
            waitSemaphoreCount:             uint32_t = 1
            pWaitSemaphores:                const VkSemaphore* = 000000E75556F3B0
                pWaitSemaphores[0]:             const VkSemaphore = 042BF70000000032
            pWaitDstStageMask:              const VkPipelineStageFlags* = 000000E75556F328
                pWaitDstStageMask[0]:           const VkPipelineStageFlags = 1024 (VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT)
            commandBufferCount:             uint32_t = 1
            pCommandBuffers:                const VkCommandBuffer* = 0000027821711ED8
                pCommandBuffers[0]:             const VkCommandBuffer = 000002782171AB00
            signalSemaphoreCount:           uint32_t = 1
            pSignalSemaphores:              const VkSemaphore* = 000000E75556F330
                pSignalSemaphores[0]:           const VkSemaphore = 14E1D60000000033
    fence:                          VkFence = 686F310000000034

Thread 0, Frame 1327:
vkQueuePresentKHR(queue, pPresentInfo) returns VkResult VK_SUCCESS (0):
    queue:                          VkQueue = 00000278213DFAA0
    pPresentInfo:                   const VkPresentInfoKHR* = 000000E75556F450:
        sType:                          VkStructureType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR (1000001001)
        pNext:                          const void* = NULL
        waitSemaphoreCount:             uint32_t = 1
        pWaitSemaphores:                const VkSemaphore* = 000000E75556F330
            pWaitSemaphores[0]:             const VkSemaphore = 14E1D60000000033
        swapchainCount:                 uint32_t = 1
        pSwapchains:                    const VkSwapchainKHR* = 000000E75556F3F8
            pSwapchains[0]:                 const VkSwapchainKHR = 0983E60000000003
        pImageIndices:                  const uint32_t* = 000000E75556F324
            pImageIndices[0]:               const uint32_t = 1
        pResults:                       VkResult* = NULL

Thread 0, Frame 1328:
vkWaitForFences(device, fenceCount, pFences, waitAll, timeout) returns VkResult VK_SUCCESS (0):
    device:                         VkDevice = 000002781CA434A0
    fenceCount:                     uint32_t = 1
    pFences:                        const VkFence* = 0000027821712450
        pFences[0]:                     const VkFence = 364D940000000031
    waitAll:                        VkBool32 = 1
    timeout:                        uint64_t = 18446744073709551615

Thread 0, Frame 1328:
vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex) returns VkResult VK_SUCCESS (0):
    device:                         VkDevice = 000002781CA434A0
    swapchain:                      VkSwapchainKHR = 0983E60000000003
    timeout:                        uint64_t = 18446744073709551615
    semaphore:                      VkSemaphore = DD684A000000002F
    fence:                          VkFence = 0000000000000000
    pImageIndex:                    uint32_t* = 2

Thread 0, Frame 1328:
vkMapMemory(device, memory, offset, size, flags, ppData) returns VkResult VK_SUCCESS (0):
    device:                         VkDevice = 000002781CA434A0
    memory:                         VkDeviceMemory = 89DAEF000000002A
    offset:                         VkDeviceSize = 0
    size:                           VkDeviceSize = 192
    flags:                          VkMemoryMapFlags = 0
    ppData:                         void** = 000002781DDFFA00

Thread 0, Frame 1328:
vkUnmapMemory(device, memory) returns void:
    device:                         VkDevice = 000002781CA434A0
    memory:                         VkDeviceMemory = 89DAEF000000002A

Thread 0, Frame 1328:
vkWaitForFences(device, fenceCount, pFences, waitAll, timeout) returns VkResult VK_SUCCESS (0):
    device:                         VkDevice = 000002781CA434A0
    fenceCount:                     uint32_t = 1
    pFences:                        const VkFence* = 00000278217124A0
        pFences[0]:                     const VkFence = 686F310000000034
    waitAll:                        VkBool32 = 1
    timeout:                        uint64_t = 18446744073709551615

Thread 0, Frame 1328:
vkResetFences(device, fenceCount, pFences) returns VkResult VK_SUCCESS (0):
    device:                         VkDevice = 000002781CA434A0
    fenceCount:                     uint32_t = 1
    pFences:                        const VkFence* = 0000027821712450
        pFences[0]:                     const VkFence = 364D940000000031

Thread 0, Frame 1328:
vkQueueSubmit(queue, submitCount, pSubmits, fence) returns VkResult VK_SUCCESS (0):
    queue:                          VkQueue = 00000278213DFAA0
    submitCount:                    uint32_t = 1
    pSubmits:                       const VkSubmitInfo* = 000000E75556F400
        pSubmits[0]:                    const VkSubmitInfo = 000000E75556F400:
            sType:                          VkStructureType = VK_STRUCTURE_TYPE_SUBMIT_INFO (4)
            pNext:                          const void* = NULL
            waitSemaphoreCount:             uint32_t = 1
            pWaitSemaphores:                const VkSemaphore* = 000000E75556F3B0
                pWaitSemaphores[0]:             const VkSemaphore = DD684A000000002F
            pWaitDstStageMask:              const VkPipelineStageFlags* = 000000E75556F328
                pWaitDstStageMask[0]:           const VkPipelineStageFlags = 1024 (VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT)
            commandBufferCount:             uint32_t = 1
            pCommandBuffers:                const VkCommandBuffer* = 0000027821711EE0
                pCommandBuffers[0]:             const VkCommandBuffer = 00000278218AC040
            signalSemaphoreCount:           uint32_t = 1
            pSignalSemaphores:              const VkSemaphore* = 000000E75556F330
                pSignalSemaphores[0]:           const VkSemaphore = 2597B50000000030
    fence:                          VkFence = 364D940000000031

Thread 0, Frame 1328:
vkQueuePresentKHR(queue, pPresentInfo) returns VkResult VK_SUCCESS (0):
    queue:                          VkQueue = 00000278213DFAA0
    pPresentInfo:                   const VkPresentInfoKHR* = 000000E75556F450:
        sType:                          VkStructureType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR (1000001001)
        pNext:                          const void* = NULL
        waitSemaphoreCount:             uint32_t = 1
        pWaitSemaphores:                const VkSemaphore* = 000000E75556F330
            pWaitSemaphores[0]:             const VkSemaphore = 2597B50000000030
        swapchainCount:                 uint32_t = 1
        pSwapchains:                    const VkSwapchainKHR* = 000000E75556F3F8
            pSwapchains[0]:                 const VkSwapchainKHR = 0983E60000000003
        pImageIndices:                  const uint32_t* = 000000E75556F324
            pImageIndices[0]:               const uint32_t = 2
        pResults:                       VkResult* = NULL

Thread 0, Frame 1329:
vkWaitForFences(device, fenceCount, pFences, waitAll, timeout) returns VkResult VK_SUCCESS (0):
    device:                         VkDevice = 000002781CA434A0
    fenceCount:                     uint32_t = 1
    pFences:                        const VkFence* = 0000027821712458
        pFences[0]:                     const VkFence = 686F310000000034
    waitAll:                        VkBool32 = 1
    timeout:                        uint64_t = 18446744073709551615

Thread 0, Frame 1329:
vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex) returns VkResult VK_SUCCESS (0):
    device:                         VkDevice = 000002781CA434A0
    swapchain:                      VkSwapchainKHR = 0983E60000000003
    timeout:                        uint64_t = 18446744073709551615
    semaphore:                      VkSemaphore = 042BF70000000032
    fence:                          VkFence = 0000000000000000
    pImageIndex:                    uint32_t* = 0

Thread 0, Frame 1329:
vkMapMemory(device, memory, offset, size, flags, ppData) returns VkResult VK_SUCCESS (0):
    device:                         VkDevice = 000002781CA434A0
    memory:                         VkDeviceMemory = 5261630000000026
    offset:                         VkDeviceSize = 0
    size:                           VkDeviceSize = 192
    flags:                          VkMemoryMapFlags = 0
    ppData:                         void** = 000002781DDFFE00

Thread 0, Frame 1329:
vkUnmapMemory(device, memory) returns void:
    device:                         VkDevice = 000002781CA434A0
    memory:                         VkDeviceMemory = 5261630000000026
```

## Available Devices
### Available devices: 2
- Name: NVIDIA GeForce GTX 1050 Type: 2
- Name: Intel(R) UHD Graphics 620 Type: 1


### Extensions for: Intel(R) UHD Graphics 620

       - VK_KHR_16bit_storage
       - VK_KHR_8bit_storage
       - VK_KHR_bind_memory2
       - VK_KHR_buffer_device_address
       - VK_KHR_copy_commands2
       - VK_KHR_create_renderpass2
       - VK_KHR_dedicated_allocation
       - VK_KHR_depth_stencil_resolve
       - VK_KHR_descriptor_update_template
       - VK_KHR_device_group
       - VK_KHR_draw_indirect_count
       - VK_KHR_driver_properties
       - VK_KHR_external_fence
       - VK_KHR_external_fence_win32
       - VK_KHR_external_memory
       - VK_KHR_external_memory_win32
       - VK_KHR_external_semaphore
       - VK_KHR_external_semaphore_win32
       - VK_KHR_get_memory_requirements2
       - VK_KHR_image_format_list
       - VK_KHR_imageless_framebuffer
       - VK_KHR_maintenance1
       - VK_KHR_maintenance2
       - VK_KHR_maintenance3
       - VK_KHR_multiview
       - VK_KHR_pipeline_executable_properties
       - VK_KHR_present_id
       - VK_KHR_present_wait
       - VK_KHR_push_descriptor
       - VK_KHR_relaxed_block_layout
       - VK_KHR_sampler_mirror_clamp_to_edge
       - VK_KHR_sampler_ycbcr_conversion
       - VK_KHR_separate_depth_stencil_layouts
       - VK_KHR_shader_atomic_int64
       - VK_KHR_shader_clock
       - VK_KHR_shader_draw_parameters
       - VK_KHR_shader_float16_int8
       - VK_KHR_shader_float_controls
       - VK_KHR_shader_non_semantic_info
       - VK_KHR_shader_subgroup_extended_types
       - VK_KHR_shader_terminate_invocation
       - VK_KHR_spirv_1_4
       - VK_KHR_storage_buffer_storage_class
       - VK_KHR_swapchain
       - VK_KHR_swapchain_mutable_format
       - VK_KHR_synchronization2
       - VK_KHR_timeline_semaphore
       - VK_KHR_uniform_buffer_standard_layout
       - VK_KHR_variable_pointers
       - VK_KHR_vulkan_memory_model
       - VK_KHR_win32_keyed_mutex
       - VK_KHR_workgroup_memory_explicit_layout
       - VK_KHR_zero_initialize_workgroup_memory
       - VK_EXT_4444_formats
       - VK_EXT_blend_operation_advanced
       - VK_EXT_buffer_device_address
       - VK_EXT_calibrated_timestamps
       - VK_EXT_color_write_enable
       - VK_EXT_conditional_rendering
       - VK_EXT_conservative_rasterization
       - VK_EXT_custom_border_color
       - VK_EXT_depth_clip_enable
       - VK_EXT_depth_range_unrestricted
       - VK_EXT_descriptor_indexing
       - VK_EXT_discard_rectangles
       - VK_EXT_extended_dynamic_state
       - VK_EXT_extended_dynamic_state2
       - VK_EXT_external_memory_host
       - VK_EXT_fragment_shader_interlock
       - VK_EXT_full_screen_exclusive
       - VK_EXT_global_priority
       - VK_EXT_global_priority_query
       - VK_EXT_hdr_metadata
       - VK_EXT_host_query_reset
       - VK_EXT_image_robustness
       - VK_EXT_index_type_uint8
       - VK_EXT_inline_uniform_block
       - VK_EXT_line_rasterization
       - VK_EXT_load_store_op_none
       - VK_EXT_memory_budget
       - VK_EXT_memory_priority
       - VK_EXT_multi_draw
       - VK_EXT_pci_bus_info
       - VK_EXT_pipeline_creation_cache_control
       - VK_EXT_pipeline_creation_feedback
       - VK_EXT_post_depth_coverage
       - VK_EXT_private_data
       - VK_EXT_provoking_vertex
       - VK_EXT_queue_family_foreign
       - VK_EXT_robustness2
       - VK_EXT_sample_locations
       - VK_EXT_sampler_filter_minmax
       - VK_EXT_scalar_block_layout
       - VK_EXT_separate_stencil_usage
       - VK_EXT_shader_atomic_float
       - VK_EXT_shader_demote_to_helper_invocation
       - VK_EXT_shader_image_atomic_int64
       - VK_EXT_shader_subgroup_ballot
       - VK_EXT_shader_subgroup_vote
       - VK_EXT_shader_viewport_index_layer
       - VK_EXT_subgroup_size_control
       - VK_EXT_texel_buffer_alignment
       - VK_EXT_tooling_info
       - VK_EXT_transform_feedback
       - VK_EXT_vertex_attribute_divisor
       - VK_EXT_vertex_input_dynamic_state
       - VK_EXT_ycbcr_2plane_444_formats
       - VK_EXT_ycbcr_image_arrays
       - VK_NV_acquire_winrt_display
       - VK_NV_clip_space_w_scaling
       - VK_NV_coverage_reduction_mode
       - VK_NV_dedicated_allocation
       - VK_NV_dedicated_allocation_image_aliasing
       - VK_NV_device_diagnostic_checkpoints
       - VK_NV_device_diagnostics_config
       - VK_NV_device_generated_commands
       - VK_NV_external_memory
       - VK_NV_external_memory_win32
       - VK_NV_fill_rectangle
       - VK_NV_fragment_coverage_to_color
       - VK_NV_framebuffer_mixed_samples
       - VK_NV_geometry_shader_passthrough
       - VK_NV_inherited_viewport_scissor
       - VK_NV_sample_mask_override_coverage
       - VK_NV_shader_sm_builtins
       - VK_NV_shader_subgroup_partitioned
       - VK_NV_viewport_array2
       - VK_NV_viewport_swizzle
       - VK_NV_win32_keyed_mutex
       - VK_NVX_multiview_per_view_attributes

### Extensions for: Intel(R) UHD Graphics 620
        VK_EXT_full_screen_exclusive
        VK_KHR_swapchain
        VK_KHR_external_memory
        VK_KHR_external_memory_win32
        VK_EXT_external_memory_host
        VK_KHR_external_semaphore
        VK_KHR_external_semaphore_win32
        VK_KHR_external_fence
        VK_KHR_external_fence_win32
        VK_KHR_timeline_semaphore
        VK_KHR_win32_keyed_mutex
        VK_KHR_get_memory_requirements2
        VK_KHR_bind_memory2
        VK_KHR_dedicated_allocation
        VK_KHR_sampler_mirror_clamp_to_edge
        VK_KHR_maintenance1
        VK_KHR_maintenance2
        VK_KHR_maintenance3
        VK_KHR_shader_draw_parameters
        VK_KHR_push_descriptor
        VK_KHR_descriptor_update_template
        VK_KHR_multiview
        VK_KHR_shader_float16_int8
        VK_KHR_shader_float_controls
        VK_KHR_16bit_storage
        VK_KHR_8bit_storage
        VK_EXT_shader_subgroup_ballot
        VK_EXT_shader_subgroup_vote
        VK_KHR_storage_buffer_storage_class
        VK_KHR_variable_pointers
        VK_KHR_relaxed_block_layout
        VK_EXT_sampler_filter_minmax
        VK_KHR_device_group
        VK_EXT_post_depth_coverage
        VK_EXT_shader_viewport_index_layer
        VK_EXT_shader_stencil_export
        VK_EXT_conservative_rasterization
        VK_EXT_sample_locations
        VK_KHR_draw_indirect_count
        VK_KHR_image_format_list
        VK_EXT_vertex_attribute_divisor
        VK_EXT_descriptor_indexing
        VK_EXT_inline_uniform_block
        VK_KHR_create_renderpass2
        VK_KHR_swapchain_mutable_format
        VK_KHR_depth_stencil_resolve
        VK_KHR_driver_properties
        VK_KHR_vulkan_memory_model
        VK_EXT_conditional_rendering
        VK_EXT_depth_clip_enable
        VK_EXT_scalar_block_layout
        VK_KHR_imageless_framebuffer
        VK_KHR_buffer_device_address
        VK_EXT_buffer_device_address
        VK_EXT_host_query_reset
        VK_NV_device_diagnostic_checkpoints
        VK_KHR_separate_depth_stencil_layouts
        VK_KHR_shader_clock
        VK_KHR_spirv_1_4
        VK_KHR_uniform_buffer_standard_layout
        VK_EXT_separate_stencil_usage
        VK_EXT_fragment_shader_interlock
        VK_EXT_index_type_uint8
        VK_KHR_shader_subgroup_extended_types
        VK_EXT_line_rasterization
        VK_EXT_memory_budget
        VK_EXT_texel_buffer_alignment
        VK_INTEL_performance_query
        VK_EXT_subgroup_size_control
        VK_EXT_shader_demote_to_helper_invocation
        VK_EXT_pipeline_creation_feedback
        VK_EXT_pipeline_creation_cache_control
        VK_KHR_pipeline_executable_properties
        VK_EXT_transform_feedback

## Queue Families of Suitable device
