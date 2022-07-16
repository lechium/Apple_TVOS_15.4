//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIRevisionHistoryToken : NSObject
{
    _Bool _accepted;	// 8 = 0x8
    unsigned int _usageLearningMask;	// 12 = 0xc
    unsigned int _usageTrackingMask;	// 16 = 0x10
    NSString *_tokenInputString;	// 24 = 0x18
    unsigned long long _offset;	// 32 = 0x20
    struct TITokenID _tokenID;	// 40 = 0x28
    NSString *_tokenDictionaryString;	// 48 = 0x30
    NSString *_userTyping;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000c00e4
@property(nonatomic, getter=isAccepted) _Bool accepted; // @synthesize accepted=_accepted;
@property(nonatomic) unsigned int usageTrackingMask; // @synthesize usageTrackingMask=_usageTrackingMask;
@property(nonatomic) unsigned int usageLearningMask; // @synthesize usageLearningMask=_usageLearningMask;
@property(copy, nonatomic) NSString *userTyping; // @synthesize userTyping=_userTyping;
@property(copy, nonatomic) NSString *tokenDictionaryString; // @synthesize tokenDictionaryString=_tokenDictionaryString;
@property(nonatomic) struct TITokenID tokenID; // @synthesize tokenID=_tokenID;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *tokenInputString; // @synthesize tokenInputString=_tokenInputString;
- (id)description;	// IMP=0x00000000000bff2b

@end
