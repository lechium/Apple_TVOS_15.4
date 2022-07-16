//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface AFUserUtteranceSelectionResults : NSObject <NSSecureCoding>
{
    NSNumber *_combinedRank;	// 8 = 0x8
    NSNumber *_combinedScore;	// 16 = 0x10
    NSString *_interactionId;	// 24 = 0x18
    NSNumber *_onDeviceUtterancesPresent;	// 32 = 0x20
    NSNumber *_originalRank;	// 40 = 0x28
    NSNumber *_originalScore;	// 48 = 0x30
    NSString *_previousUtterance;	// 56 = 0x38
    NSString *_sessionId;	// 64 = 0x40
    NSString *_utteranceSource;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000049562
- (void).cxx_destruct;	// IMP=0x0000000000049980
@property(copy, nonatomic) NSString *utteranceSource; // @synthesize utteranceSource=_utteranceSource;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *previousUtterance; // @synthesize previousUtterance=_previousUtterance;
@property(copy, nonatomic) NSNumber *originalScore; // @synthesize originalScore=_originalScore;
@property(copy, nonatomic) NSNumber *originalRank; // @synthesize originalRank=_originalRank;
@property(copy, nonatomic) NSNumber *onDeviceUtterancesPresent; // @synthesize onDeviceUtterancesPresent=_onDeviceUtterancesPresent;
@property(copy, nonatomic) NSString *interactionId; // @synthesize interactionId=_interactionId;
@property(copy, nonatomic) NSNumber *combinedScore; // @synthesize combinedScore=_combinedScore;
@property(copy, nonatomic) NSNumber *combinedRank; // @synthesize combinedRank=_combinedRank;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000049663
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004956a
- (id)description;	// IMP=0x00000000000494c8

@end

