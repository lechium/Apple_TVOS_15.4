//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _MKRouteETA : NSObject
{
    int _status;	// 8 = 0x8
    double _distance;	// 16 = 0x10
    unsigned long long _transportType;	// 24 = 0x18
    double _travelTime;	// 32 = 0x20
    double _responseTime;	// 40 = 0x28
}

+ (id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3 status:(int)arg4;	// IMP=0x0000000000133840
+ (id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3;	// IMP=0x000000000013382c
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) double responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) double travelTime; // @synthesize travelTime=_travelTime;
@property(nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(nonatomic) double distance; // @synthesize distance=_distance;

@end
