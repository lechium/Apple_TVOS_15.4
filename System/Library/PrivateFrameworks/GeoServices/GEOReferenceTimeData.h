//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOReferenceTimeData : NSObject <NSSecureCoding>
{
    double _refTime;	// 8 = 0x8
    double _refError;	// 16 = 0x10
    double _kernTime;	// 24 = 0x18
    struct timeval _kernBoottime;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002b8496
@property(readonly, nonatomic) struct timeval kernBootTime; // @synthesize kernBootTime=_kernBoottime;
@property(readonly, nonatomic) double kernTime; // @synthesize kernTime=_kernTime;
@property(readonly, nonatomic) double refError; // @synthesize refError=_refError;
@property(readonly, nonatomic) double refTime; // @synthesize refTime=_refTime;
- (id)description;	// IMP=0x00000000002b87a5
- (double)currentReferenceTime;	// IMP=0x00000000002b86a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002b85ec
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002b8513
- (id)initWithRefTime:(double)arg1 refError:(double)arg2 kernTime:(double)arg3 bootTime:(struct timeval)arg4;	// IMP=0x00000000002b849e

@end
