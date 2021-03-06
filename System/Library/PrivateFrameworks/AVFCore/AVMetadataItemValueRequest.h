//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVMetadataItem, AVMetadataItemValueRequestInternal;

@interface AVMetadataItemValueRequest : NSObject
{
    AVMetadataItemValueRequestInternal *_valueRequest;	// 8 = 0x8
}

+ (id)metadataItemValueRequestWithMetadataItem:(id)arg1;	// IMP=0x000000000001d8ec
- (void)respondWithError:(id)arg1;	// IMP=0x000000000001dafa
- (void)respondWithValue:(id)arg1;	// IMP=0x000000000001dae6
- (void)respondWithValue:(id)arg1 dataType:(id)arg2;	// IMP=0x000000000001da70
- (id)error;	// IMP=0x000000000001da62
- (id)dataType;	// IMP=0x000000000001da54
- (id)value;	// IMP=0x000000000001da46
@property(readonly) __weak AVMetadataItem *metadataItem;
- (void)dealloc;	// IMP=0x000000000001d9af
- (id)initWithMetadataItem:(id)arg1;	// IMP=0x000000000001d91b

@end

