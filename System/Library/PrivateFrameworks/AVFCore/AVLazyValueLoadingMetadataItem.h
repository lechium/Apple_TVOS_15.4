//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVLazyValueLoadingMetadataItemInternal;

__attribute__((visibility("hidden")))
@interface AVLazyValueLoadingMetadataItem
{
    AVLazyValueLoadingMetadataItemInternal *_lazyMetadataItem;	// 16 = 0x10
}

+ (id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001cd9b
- (id)dataType;	// IMP=0x000000000001d893
- (id)value;	// IMP=0x000000000001d860
- (void)_waitForLoadingOfValueDependentKey:(id)arg1;	// IMP=0x000000000001d7a0
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d49f
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001d443
- (long long)_valueStatus;	// IMP=0x000000000001d371
- (_Bool)_valueForKeyDependsOnMetadataValue:(id)arg1;	// IMP=0x000000000001d2d2
- (void)_valueRequestDidFinish;	// IMP=0x000000000001cfb0
- (void)dealloc;	// IMP=0x000000000001cefa
- (id)_initWithFigMetadataDictionary:(id)arg1 valueLoadingHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001cdf2

@end

