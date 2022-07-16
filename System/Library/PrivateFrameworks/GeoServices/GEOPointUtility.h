//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEOPointUtility : NSObject
{
}

+ (id)debugDescriptionForCompressedZilchData:(id)arg1;	// IMP=0x00000000002d87c9
+ (id)subdataFromPointData:(id)arg1 fromPointIndex:(unsigned long long)arg2 usesZilch:(_Bool)arg3;	// IMP=0x00000000002d8712
+ (id)compressedZilchDataFromPoints:(void *)arg1 fromPointIndex:(unsigned long long)arg2 pointCount:(unsigned long long)arg3;	// IMP=0x00000000002d8610
+ (id)unpackBasicPoints:(id)arg1;	// IMP=0x00000000002d80cb
+ (id)unpackZilchPoints:(id)arg1;	// IMP=0x00000000002d7fb1
+ (id)unpackPoints:(id)arg1 usesZilch:(_Bool)arg2;	// IMP=0x00000000002d7f33
+ (CDStruct_39925896)pointAt:(unsigned long long)arg1 pointData:(id)arg2 usesZilch:(_Bool)arg3;	// IMP=0x00000000002d7bef
+ (unsigned long long)pointCount:(id)arg1 usesZilch:(_Bool)arg2;	// IMP=0x00000000002d7b86
+ (void *)controlPoints:(id)arg1 usesZilch:(_Bool)arg2;	// IMP=0x00000000002d7b1d

@end

