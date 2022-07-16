//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/NSCopying-Protocol.h>
#import <IMSharedUtilities/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface IMMessagePartSyndicationRange : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_serializedString;	// 8 = 0x8
    unsigned long long _serializedVersion;	// 16 = 0x10
    long long _syndicationType;	// 24 = 0x18
    long long _syndicationStatus;	// 32 = 0x20
    NSDate *_syndicationStartDate;	// 40 = 0x28
    struct _NSRange _messagePartRange;	// 48 = 0x30
}

+ (id)maxStartDateForRanges:(id)arg1;	// IMP=0x000000000007d940
+ (id)minStartDateForRanges:(id)arg1;	// IMP=0x000000000007d75a
+ (id)findChangesFromRangeArray:(id)arg1 comparedToRangeArray:(id)arg2;	// IMP=0x000000000007d022
+ (id)messagePartSyndicationRangeForRange:(struct _NSRange)arg1 inRangesArray:(id)arg2;	// IMP=0x000000000007ce81
+ (id)updateMessagesRanges:(id)arg1 withMessagePartSyndicationRanges:(id)arg2 didUpdate:(_Bool *)arg3;	// IMP=0x000000000007c8ff
+ (id)unarchiveClasses;	// IMP=0x000000000007c7e9
+ (id)rangesFromSerializedString:(id)arg1;	// IMP=0x000000000007c423
+ (void)setSerializationVersion:(unsigned long long)arg1;	// IMP=0x000000000007c361
+ (unsigned long long)serializationVersion;	// IMP=0x000000000007c354
+ (id)deserializeSyndicationRangeFromString:(id)arg1;	// IMP=0x000000000007c10a
+ (id)messageRangeFromTokens_v1:(id)arg1;	// IMP=0x000000000007bb66
+ (id)serializedStringFromArray:(id)arg1;	// IMP=0x000000000007b943
+ (id)_stringFromSyndicationStatus:(long long)arg1;	// IMP=0x000000000007b5e4
+ (id)_stringFromSyndicationType:(long long)arg1;	// IMP=0x000000000007b58e
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007b26c
- (void).cxx_destruct;	// IMP=0x000000000007db50
@property(readonly, nonatomic) NSDate *syndicationStartDate; // @synthesize syndicationStartDate=_syndicationStartDate;
@property(readonly, nonatomic) struct _NSRange messagePartRange; // @synthesize messagePartRange=_messagePartRange;
@property(nonatomic) long long syndicationStatus; // @synthesize syndicationStatus=_syndicationStatus;
@property(readonly, nonatomic) long long syndicationType; // @synthesize syndicationType=_syndicationType;
- (_Bool)_canBeReplacedByRange:(id)arg1;	// IMP=0x000000000007c36e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007b7af
- (id)description;	// IMP=0x000000000007b618
@property(readonly, nonatomic) unsigned long long serializedVersion; // @synthesize serializedVersion=_serializedVersion;
@property(readonly, nonatomic) NSString *serializedString; // @synthesize serializedString=_serializedString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007b274
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007b17a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007b05f
- (id)initWithSyndicationAction:(id)arg1;	// IMP=0x000000000007af9d
- (id)initWithSyndicationType:(long long)arg1 messagePartRange:(struct _NSRange)arg2 syndicationStartDate:(id)arg3 syndicationStatus:(long long)arg4;	// IMP=0x000000000007ae5f
- (id)initWithSyndicationType:(long long)arg1 messagePartRange:(struct _NSRange)arg2 syndicationStartDate:(id)arg3;	// IMP=0x000000000007ae38

@end

