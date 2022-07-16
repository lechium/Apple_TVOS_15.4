//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>
#import <Photos/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PHUserFeedback : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _type;	// 8 = 0x8
    unsigned long long _feature;	// 16 = 0x10
    NSString *_context;	// 24 = 0x18
    NSDate *_lastModifiedDate;	// 32 = 0x20
}

+ (unsigned long long)_feedbackFeatureForMemoryFeature:(id)arg1;	// IMP=0x00000000001382c8
+ (id)_contextForSongIdentifiers:(id)arg1;	// IMP=0x00000000001381c6
+ (id)_contextForMemoryFeature:(id)arg1;	// IMP=0x0000000000137afb
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000137af3
+ (unsigned long long)sumFeedbackType:(unsigned long long)arg1 withOtherFeedbackType:(unsigned long long)arg2;	// IMP=0x0000000000137acc
+ (unsigned long long)mergeFeedbackType:(unsigned long long)arg1 withOtherFeedbackType:(unsigned long long)arg2;	// IMP=0x0000000000137abc
+ (id)negativeUserFeedbackForPerson:(id)arg1;	// IMP=0x00000000001379fd
+ (id)negativeUserFeedbackForMemoryMusicWithSongIdentifier:(id)arg1 existingFeedback:(id)arg2;	// IMP=0x000000000013777f
+ (id)negativeUserFeedbackForMemoryFeature:(id)arg1 existingFeedback:(id)arg2;	// IMP=0x0000000000137580
- (void).cxx_destruct;	// IMP=0x0000000000137558
@property(readonly, copy) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, copy) NSString *context; // @synthesize context=_context;
@property(readonly) unsigned long long feature; // @synthesize feature=_feature;
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x0000000000137339
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001371dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001370ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000137058
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000136fe1
- (id)contextAsListOfSongIdentifiersWithError:(id *)arg1;	// IMP=0x0000000000136ca4
- (id)contextAsLocationWithError:(id *)arg1;	// IMP=0x00000000001366d7
- (id)contextAsDateIntervalWithError:(id *)arg1;	// IMP=0x0000000000136270
- (id)contextAsDateWithError:(id *)arg1;	// IMP=0x000000000013600c
- (id)contextAsStringWithError:(id *)arg1;	// IMP=0x0000000000135ec3
- (id)initWithType:(unsigned long long)arg1 feature:(unsigned long long)arg2 context:(id)arg3 lastModifiedDate:(id)arg4;	// IMP=0x0000000000135e3b
- (id)initWithType:(unsigned long long)arg1 feature:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0000000000135daf

@end
