//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ICMediaAPIURLMappingSet : NSObject
{
    NSArray *_responsePayload;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009a0eb
- (id)mappingsForFeatureName:(id)arg1;	// IMP=0x0000000000099e8e
- (void)enumerateMappingsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000099d00
@property(readonly, copy, nonatomic) NSArray *responsePayload;
- (id)initWithResponsePayload:(id)arg1;	// IMP=0x0000000000099c7f

@end
