//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollections : NSObject
{
    NSMutableDictionary *_rules;	// 8 = 0x8
    NSMutableArray *_supportedPayloads;	// 16 = 0x10
    int _payload;	// 24 = 0x18
    unsigned char _transportType;	// 28 = 0x1c
    unsigned char _encodingType;	// 29 = 0x1d
}

+ (id)newCorrectedVideoRules:(id)arg1 payload:(int)arg2;	// IMP=0x000000000039a73a
@property(readonly) NSDictionary *rules; // @synthesize rules=_rules;
@property(readonly) NSArray *supportedPayloads; // @synthesize supportedPayloads=_supportedPayloads;
- (id)videoRulesCollectionsByRemovingPayload:(int)arg1 andPayload:(int)arg2 removeCellular:(_Bool)arg3;	// IMP=0x000000000039bd0f
@property(readonly, nonatomic) _Bool isDecodeSupported;
@property(readonly, nonatomic) _Bool isEncodeSupported;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000039b6db
- (_Bool)isPayloadSupported:(int)arg1;	// IMP=0x000000000039b67c
- (void)addSupportedPayload:(int)arg1;	// IMP=0x000000000039b624
- (void)limitVideoRulesToMaxWidth:(int)arg1 maxHeight:(int)arg2 transportType:(unsigned char)arg3;	// IMP=0x000000000039b2c0
- (void)limitRulesFromVideoRules:(int)arg1 frameHeight:(int)arg2 videoRules:(id)arg3;	// IMP=0x000000000039b119
- (void)removeVideoRulesWithWidth:(int)arg1 height:(int)arg2 transportType:(unsigned char)arg3 encodingType:(unsigned char)arg4;	// IMP=0x000000000039adc5
- (void)appendVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;	// IMP=0x000000000039ab76
- (void)addVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;	// IMP=0x000000000039aa34
- (id)supportedVideoRulesForBitrate:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;	// IMP=0x000000000039a6b6
- (id)supportedVideoRulesSizesForBitrate:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;	// IMP=0x000000000039a610
- (id)getVideoRulesForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3;	// IMP=0x000000000039a59c
- (id)description;	// IMP=0x000000000039a29a
- (id)supportedVideoSizesForKey:(id)arg1;	// IMP=0x000000000039a05b
- (id)supportedVideoRulesSyncForTransportType:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3;	// IMP=0x0000000000399fd8
- (id)filterRules:(id)arg1 byBitrateRule:(id)arg2;	// IMP=0x0000000000399d0c
- (void)dealloc;	// IMP=0x0000000000399c9f
- (id)init;	// IMP=0x0000000000399b6f

@end

