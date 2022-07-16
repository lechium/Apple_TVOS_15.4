//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UISEGestureFeatureDelegate-Protocol.h>
#import <UIKitCore/_UISETouchedEdgesProvider-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UISEHybridEdgesFailGestureFeature <_UISEGestureFeatureDelegate, _UISETouchedEdgesProvider>
{
    unsigned long long _fails;	// 8 = 0x8
    NSArray *_subfeatures;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006a831b
@property(readonly, nonatomic) NSArray *subfeatures; // @synthesize subfeatures=_subfeatures;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;	// IMP=0x00000000006a8182
- (id)debugDictionary;	// IMP=0x00000000006a7f5d
- (void)featureDidChangeState:(id)arg1;	// IMP=0x00000000006a7ef0
@property(readonly, nonatomic) unsigned long long touchedEdges;
- (id)initWithSubfeatures:(id)arg1;	// IMP=0x00000000006a7c0d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

