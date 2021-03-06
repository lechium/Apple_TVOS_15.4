//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol KVProfileReader;

@interface KVProfile : NSObject
{
    NSObject<KVProfileReader> *_profileReader;	// 8 = 0x8
}

+ (id)profileWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a267
+ (void)initalize;	// IMP=0x000000000000a243
- (void).cxx_destruct;	// IMP=0x000000000000a1c7
- (id)description;	// IMP=0x000000000000a1b1
- (_Bool)enumerateDatasetsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a10f
- (id)profileInfo;	// IMP=0x000000000000a0f9
- (id)initWithProfileData:(id)arg1 provider:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000a031
- (id)initWithProfileData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009fbe
- (_Bool)donateWithServiceProvider:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008e8f
- (id)_donatorForDataset:(id)arg1 serviceProvider:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000008d82

@end

