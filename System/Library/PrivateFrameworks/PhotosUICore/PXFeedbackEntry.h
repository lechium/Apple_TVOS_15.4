//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface PXFeedbackEntry : NSObject <NSSecureCoding>
{
    NSDictionary *_feedbackItemDetails;	// 8 = 0x8
    _Bool _alreadyCollected;	// 16 = 0x10
    NSMutableDictionary *_feedbackItemsDict;	// 24 = 0x18
    long long _generalFeedback;	// 32 = 0x20
    NSString *_systemID;	// 40 = 0x28
    NSDate *_timestamp;	// 48 = 0x30
    NSString *_appVersion;	// 56 = 0x38
}

+ (id)createFakeTestFeedbackDictionary;	// IMP=0x00000000001f6bf5
+ (id)createFakeTestEntry;	// IMP=0x00000000001f6ac1
+ (id)negativeFeedbackForImageQualityKeys;	// IMP=0x00000000001f6a91
+ (id)positiveFeedbackForImageQualityKeys;	// IMP=0x00000000001f6a61
+ (id)negativeFeedbackForAutoLoopKeys;	// IMP=0x00000000001f6a31
+ (id)positiveFeedbackForAutoLoopKeys;	// IMP=0x00000000001f6a01
+ (id)negativeFeedbackForMemoriesKeys;	// IMP=0x00000000001f69d1
+ (id)positiveFeedbackForMemoriesKeys;	// IMP=0x00000000001f69a1
+ (id)negativeFeedbackForMemoryDetailsKeys;	// IMP=0x00000000001f6971
+ (id)positiveFeedbackForMemoryDetailsKeys;	// IMP=0x00000000001f6941
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001f6939
- (void).cxx_destruct;	// IMP=0x00000000001f6727
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) _Bool alreadyCollected; // @synthesize alreadyCollected=_alreadyCollected;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *systemID; // @synthesize systemID=_systemID;
@property(nonatomic) long long generalFeedback; // @synthesize generalFeedback=_generalFeedback;
@property(retain, nonatomic) NSMutableDictionary *feedbackItemsDict; // @synthesize feedbackItemsDict=_feedbackItemsDict;
- (id)longDescription;	// IMP=0x00000000001f634d
- (id)asTextForItemKey:(id)arg1;	// IMP=0x00000000001f62ac
- (id)osKeyForItemKey:(id)arg1;	// IMP=0x00000000001f620b
- (_Bool)userLikedResults;	// IMP=0x00000000001f60eb
- (id)uniqueID;	// IMP=0x00000000001f5fdb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001f5e7c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f5c6b
- (id)initWithSystemID:(id)arg1 timestamp:(id)arg2;	// IMP=0x00000000001f5a91
- (id)init;	// IMP=0x00000000001f5444

@end

