//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsML/PMLTransformerProtocol-Protocol.h>

@class NSString;
@protocol PMLTransformerProtocol;

@interface SGSelectiveTransformer : NSObject <PMLTransformerProtocol>
{
    id <PMLTransformerProtocol> _transformer;	// 8 = 0x8
    NSString *_inputKey;	// 16 = 0x10
}

+ (id)withTransformer:(id)arg1 appliedToInputKey:(id)arg2;	// IMP=0x000000000002ceb6
- (void).cxx_destruct;	// IMP=0x000000000002ce8e
@property(retain) NSString *inputKey; // @synthesize inputKey=_inputKey;
@property(retain) id <PMLTransformerProtocol> transformer; // @synthesize transformer=_transformer;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002cd47
- (_Bool)isEqualToSGSelectiveTransformer:(id)arg1;	// IMP=0x000000000002cb76
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x000000000002ca3a
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x000000000002c8de
- (id)transform:(id)arg1;	// IMP=0x000000000002c68c
- (id)initWithTransformer:(id)arg1 appliedToInputKey:(id)arg2;	// IMP=0x000000000002c5ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

