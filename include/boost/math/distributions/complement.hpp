//  (C) Copyright John Maddock 2006.
//  (C) Copyright Paul A. Bristow 2006.
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_STATS_COMPLEMENT_HPP
#define BOOST_STATS_COMPLEMENT_HPP

//
// This code really defines our own tuple type.
// It would be nice to reuse std::tr1::tuple
// while retaining our own type safety, but it's
// not clear if that's possible.  In any case this
// code is *very* lightweight.
//
namespace boost{ namespace math{

template <class Dist, class RealType>
struct complemented2_type
{
   const Dist& dist;
   const RealType& param;
};

template <class Dist, class RealType1, class RealType2>
struct complemented3_type
{
   const Dist& dist;
   const RealType1& param1;
   const RealType2& param2;
};

template <class Dist, class RealType1, class RealType2, class RealType3>
struct complemented4_type
{
   const Dist& dist;
   const RealType1& param1;
   const RealType2& param2;
   const RealType3& param3;
};

template <class Dist, class RealType1, class RealType2, class RealType3, class RealType4>
struct complemented5_type
{
   const Dist& dist;
   const RealType1& param1;
   const RealType2& param2;
   const RealType3& param3;
   const RealType4& param4;
};

template <class Dist, class RealType1, class RealType2, class RealType3, class RealType4, class RealType5>
struct complemented6_type
{
   const Dist& dist;
   const RealType1& param1;
   const RealType2& param2;
   const RealType3& param3;
   const RealType4& param4;
   const RealType5& param5;
};

template <class Dist, class RealType1, class RealType2, class RealType3, class RealType4, class RealType5, class RealType6>
struct complemented7_type
{
   const Dist& dist;
   const RealType1& param1;
   const RealType2& param2;
   const RealType3& param3;
   const RealType4& param4;
   const RealType5& param5;
   const RealType6& param6;
};

template <class Dist, class RealType>
complemented2_type<Dist, RealType> complement(const Dist& d, const RealType& r)
{
   complemented2_type<Dist, RealType> c = { d, r };
   return c;
}

template <class Dist, class RealType1, class RealType2>
complemented3_type<Dist, RealType1, RealType2> complement(const Dist& d, const RealType1& r1, const RealType2& r2)
{
   complemented3_type<Dist, RealType1, RealType2> c = { d, r1, r2 };
   return c;
}

template <class Dist, class RealType1, class RealType2, class RealType3>
complemented4_type<Dist, RealType1, RealType2, RealType3> complement(const Dist& d, const RealType1& r1, const RealType2& r2, const RealType3& r3)
{
   complemented4_type<Dist, RealType1, RealType2, RealType3> c = { d, r1, r2, r3 };
   return c;
}

template <class Dist, class RealType1, class RealType2, class RealType3, class RealType4>
complemented5_type<Dist, RealType1, RealType2, RealType3, RealType4> complement(const Dist& d, const RealType1& r1, const RealType2& r2, const RealType3& r3, const RealType4& r4)
{
   complemented5_type<Dist, RealType1, RealType2, RealType3, RealType4> c = { d, r1, r2, r3, r4 };
   return c;
}

template <class Dist, class RealType1, class RealType2, class RealType3, class RealType4, class RealType5>
complemented6_type<Dist, RealType1, RealType2, RealType3, RealType4, RealType5> complement(const Dist& d, const RealType1& r1, const RealType2& r2, const RealType3& r3, const RealType4& r4, const RealType5& r5)
{
   complemented6_type<Dist, RealType1, RealType2, RealType3, RealType4, RealType5> c = { d, r1, r2, r3, r4, r5 };
   return c;
}

template <class Dist, class RealType1, class RealType2, class RealType3, class RealType4, class RealType5, class RealType6>
complemented7_type<Dist, RealType1, RealType2, RealType3, RealType4, RealType5, RealType6> complement(const Dist& d, const RealType1& r1, const RealType2& r2, const RealType3& r3, const RealType4& r4, const RealType5& r5, const RealType6& r6)
{
   complemented7_type<Dist, RealType1, RealType2, RealType3, RealType4, RealType5, RealType6> c = { d, r1, r2, r3, r4, r5, r6 };
   return c;
}

} // namespace math
} // namespace boost

#endif // BOOST_STATS_COMPLEMENT_HPP

