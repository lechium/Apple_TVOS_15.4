//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/ASCOffer-Protocol.h>
#import <AppStoreComponents/NSSecureCoding-Protocol.h>

@class ASCAdamID, NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface ASCURLOffer : NSObject <ASCOffer, NSSecureCoding>
{
    _Bool _isSensitive;	// 8 = 0x8
    ASCAdamID *_id;	// 16 = 0x10
    NSDictionary *_titles;	// 24 = 0x18
    NSDictionary *_subtitles;	// 32 = 0x20
    long long _flags;	// 40 = 0x28
    NSNumber *_ageRating;	// 48 = 0x30
    NSArray *_metrics;	// 56 = 0x38
    NSURL *_url;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000035957
- (void).cxx_destruct;	// IMP=0x00000000000367eb
@property(readonly, nonatomic) _Bool isSensitive; // @synthesize isSensitive=_isSensitive;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSNumber *ageRating; // @synthesize ageRating=_ageRating;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSDictionary *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, copy, nonatomic) NSDictionary *titles; // @synthesize titles=_titles;
@property(readonly, copy, nonatomic) ASCAdamID *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000036113
@property(readonly) unsigned long long hash;
- (id)offerWithMetrics:(id)arg1;	// IMP=0x0000000000035e21
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035e16
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000035c4e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003595f
- (id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 url:(id)arg7 isSensitive:(_Bool)arg8;	// IMP=0x00000000000357ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

