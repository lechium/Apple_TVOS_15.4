//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFMyriadAdvertisementContextMutating-Protocol.h>

@class AFMyriadAdvertisementContext, NSData, NSString;

@interface _AFMyriadAdvertisementContextMutation : NSObject <AFMyriadAdvertisementContextMutating>
{
    AFMyriadAdvertisementContext *_baseModel;	// 8 = 0x8
    unsigned long long _generation;	// 16 = 0x10
    NSData *_contextData;	// 24 = 0x18
    double _contextFetchDelay;	// 32 = 0x20
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasGeneration:1;
        unsigned int hasContextData:1;
        unsigned int hasContextFetchDelay:1;
    } _mutationFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007e6ab
- (id)generate;	// IMP=0x000000000007e587
- (void)setContextFetchDelay:(double)arg1;	// IMP=0x000000000007e578
- (void)setContextData:(id)arg1;	// IMP=0x000000000007e558
- (void)setGeneration:(unsigned long long)arg1;	// IMP=0x000000000007e54a
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000007e4df
- (id)init;	// IMP=0x000000000007e4cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

