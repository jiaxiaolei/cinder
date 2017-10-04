..
    Warning: Do not edit this file. It is automatically generated from the
    software project's code and your changes will be overwritten.

    The tool to generate this file lives in openstack-doc-tools repository.

    Please make any changes needed in the code, then run the
    autogenerate-config-doc tool from the openstack-doc-tools repository, or
    ask for help on the documentation mailing list, IRC channel or meeting.

.. _cinder-api:

.. list-table:: Description of API configuration options
   :header-rows: 1
   :class: config-ref-table

   * - Configuration option = Default value
     - Description
   * - **[DEFAULT]**
     -
   * - ``api_rate_limit`` = ``True``
     - (Boolean) Enables or disables rate limit of the API.
   * - ``az_cache_duration`` = ``3600``
     - (Integer) Cache volume availability zones in memory for the provided duration in seconds
   * - ``backend_host`` = ``None``
     - (String) Backend override of host value.
   * - ``default_timeout`` = ``31536000``
     - (Integer) Default timeout for CLI operations in minutes. For example, LUN migration is a typical long running operation, which depends on the LUN size and the load of the array. An upper bound in the specific deployment can be set to avoid unnecessary long wait. By default, it is 365 days long.
   * - ``enable_v1_api`` = ``False``
     - (Boolean) DEPRECATED: Deploy v1 of the Cinder API.
   * - ``enable_v2_api`` = ``True``
     - (Boolean) DEPRECATED: Deploy v2 of the Cinder API.
   * - ``enable_v3_api`` = ``True``
     - (Boolean) Deploy v3 of the Cinder API.
   * - ``extra_capabilities`` = ``{}``
     - (String) User defined capabilities, a JSON formatted string specifying key/value pairs. The key/value pairs can be used by the CapabilitiesFilter to select between backends when requests specify volume types. For example, specifying a service level or the geographical location of a backend, then creating a volume type to allow the user to select by these different properties.
   * - ``ignore_pool_full_threshold`` = ``False``
     - (Boolean) Force LUN creation even if the full threshold of pool is reached. By default, the value is False.
   * - ``management_ips`` =
     - (String) List of Management IP addresses (separated by commas)
   * - ``message_ttl`` = ``2592000``
     - (Integer) message minimum life in seconds.
   * - ``osapi_max_limit`` = ``1000``
     - (Integer) The maximum number of items that a collection resource returns in a single response
   * - ``osapi_volume_base_URL`` = ``None``
     - (String) Base URL that will be presented to users in links to the OpenStack Volume API
   * - ``osapi_volume_ext_list`` =
     - (List) Specify list of extensions to load when using osapi_volume_extension option with cinder.api.contrib.select_extensions
   * - ``osapi_volume_extension`` = ``['cinder.api.contrib.standard_extensions']``
     - (Multi-valued) osapi volume extension to load
   * - ``osapi_volume_listen`` = ``0.0.0.0``
     - (String) IP address on which OpenStack Volume API listens
   * - ``osapi_volume_listen_port`` = ``8776``
     - (Port number) Port on which OpenStack Volume API listens
   * - ``osapi_volume_use_ssl`` = ``False``
     - (Boolean) Wraps the socket in a SSL context if True is set. A certificate file and key file must be specified.
   * - ``osapi_volume_workers`` = ``None``
     - (Integer) Number of workers for OpenStack Volume API service. The default is equal to the number of CPUs available.
   * - ``per_volume_size_limit`` = ``-1``
     - (Integer) Max size allowed per volume, in gigabytes
   * - ``public_endpoint`` = ``None``
     - (String) Public url to use for versions endpoint. The default is None, which will use the request's host_url attribute to populate the URL base. If Cinder is operating behind a proxy, you will want to change this to represent the proxy's URL.
   * - ``query_volume_filters`` = ``name, status, metadata, availability_zone, bootable, group_id``
     - (List) Volume filter options which non-admin user could use to query volumes. Default values are: ['name', 'status', 'metadata', 'availability_zone' ,'bootable', 'group_id']
   * - ``transfer_api_class`` = ``cinder.transfer.api.API``
     - (String) The full class name of the volume transfer API class
   * - ``volume_api_class`` = ``cinder.volume.api.API``
     - (String) The full class name of the volume API class to use
   * - ``volume_name_prefix`` = ``openstack-``
     - (String) Prefix before volume name to differentiate DISCO volume created through openstack and the other ones
   * - ``volume_name_template`` = ``volume-%s``
     - (String) Template string to be used to generate volume names
   * - ``volume_number_multiplier`` = ``-1.0``
     - (Floating point) Multiplier used for weighing volume number. Negative numbers mean to spread vs stack.
   * - ``volume_transfer_key_length`` = ``16``
     - (Integer) The number of characters in the autogenerated auth key.
   * - ``volume_transfer_salt_length`` = ``8``
     - (Integer) The number of characters in the salt.
   * - **[oslo_middleware]**
     -
   * - ``enable_proxy_headers_parsing`` = ``False``
     - (Boolean) Whether the application is behind a proxy or not. This determines if the middleware should parse the headers or not.
   * - ``max_request_body_size`` = ``114688``
     - (Integer) The maximum body size for each request, in bytes.
   * - ``secure_proxy_ssl_header`` = ``X-Forwarded-Proto``
     - (String) DEPRECATED: The HTTP Header that will be used to determine what the original request protocol scheme was, even if it was hidden by a SSL termination proxy.
   * - **[oslo_versionedobjects]**
     -
   * - ``fatal_exception_format_errors`` = ``False``
     - (Boolean) Make exception message format errors fatal