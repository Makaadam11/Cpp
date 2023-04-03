namespace boost {
  class any;
  void swap(any &, any &);
  template<typename T> T any_cast(any &);
  template<typename T> T any_cast(any &&);
  template<typename T> T any_cast(const any &);
  template<typename ValueType> const ValueType * any_cast(const any *);
  template<typename ValueType> ValueType * any_cast(any *);
}