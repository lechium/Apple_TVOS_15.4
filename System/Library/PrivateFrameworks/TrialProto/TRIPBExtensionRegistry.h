//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface TRIPBExtensionRegistry : NSObject <NSCopying>
{
    NSMutableDictionary *mutableClassMap_;	// 8 = 0x8
}

- (void)addExtensions:(id)arg1;	// IMP=0x000000000001b870
- (id)extensionForDescriptor:(id)arg1 fieldNumber:(long long)arg2;	// IMP=0x000000000001b814
- (void)addExtension:(id)arg1;	// IMP=0x000000000001b76a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b711
- (void)dealloc;	// IMP=0x000000000001b6d6
- (id)init;	// IMP=0x000000000001b68a

@end
