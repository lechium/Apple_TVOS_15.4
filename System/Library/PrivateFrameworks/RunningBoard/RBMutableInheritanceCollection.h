//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCountedSet;

@interface RBMutableInheritanceCollection
{
    NSCountedSet *_countedNamespaces;	// 32 = 0x20
}

+ (id)collectionWithInheritances:(id)arg1;	// IMP=0x0000000000025df7
- (void).cxx_destruct;	// IMP=0x00000000000267db
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000267ad
- (void)unionCollection:(id)arg1;	// IMP=0x0000000000026683
- (void)removeInheritance:(id)arg1;	// IMP=0x0000000000026470
- (void)addInheritance:(id)arg1;	// IMP=0x000000000002625c
- (id)allNamespaces;	// IMP=0x0000000000026235
- (id)_initWithCollection:(id)arg1;	// IMP=0x0000000000025e94

@end

