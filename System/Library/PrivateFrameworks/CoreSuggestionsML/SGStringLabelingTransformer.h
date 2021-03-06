//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsML/PMLTransformerProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface SGStringLabelingTransformer : NSObject <PMLTransformerProtocol>
{
    NSDictionary *_labelMapping;	// 8 = 0x8
}

+ (id)convertLabelsToMapping:(id)arg1;	// IMP=0x000000000002679b
+ (id)withLabelStrings:(id)arg1;	// IMP=0x0000000000026752
- (void).cxx_destruct;	// IMP=0x0000000000026742
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000266c4
- (_Bool)isEqualToStringLabelingTransformer:(id)arg1;	// IMP=0x0000000000026698
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x0000000000026638
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x00000000000265c5
- (id)transform:(id)arg1;	// IMP=0x0000000000026518
- (id)initWithLabelMapping:(id)arg1;	// IMP=0x0000000000026432
- (id)initWithLabelStrings:(id)arg1;	// IMP=0x0000000000026348

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

