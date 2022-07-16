//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSUUID;

@interface CMWorkoutMetsData : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *fStartDate;	// 8 = 0x8
    NSDate *fEndDate;	// 16 = 0x10
    NSNumber *fMets;	// 24 = 0x18
    NSUUID *fSourceId;	// 32 = 0x20
    NSUUID *fSessionId;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001927ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000192995
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000192939
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001927f4
- (id)description;	// IMP=0x000000000019272a
@property(readonly, nonatomic) NSUUID *sessionId;
@property(readonly, nonatomic) NSUUID *sourceId;
@property(readonly, nonatomic) NSNumber *mets;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (void)dealloc;	// IMP=0x0000000000192699
- (id)initWithSessionId:(id)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 mets:(id)arg5;	// IMP=0x00000000001925e7
- (id)initWithCLWorkoutMets:(const struct CLWorkoutMets *)arg1;	// IMP=0x00000000001924e6

@end

