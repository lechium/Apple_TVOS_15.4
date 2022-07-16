//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableDictionary, _UISelectorDictionary;

__attribute__((visibility("hidden")))
@interface _UICommandIdentifierDictionary : NSObject <NSCopying>
{
    _UISelectorDictionary *_actionDictionary;	// 8 = 0x8
    NSMutableDictionary *_actionPropertyListDictionary;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000010f9d46
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010f9cb3
- (unsigned long long)hash;	// IMP=0x00000000010f9c74
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010f9c46
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000000010f9bda
- (void)removeEntriesFromDictionary:(id)arg1;	// IMP=0x00000000010f9b22
- (id)intersectingIdentifiersFromDictionary:(id)arg1;	// IMP=0x00000000010f9929
- (_Bool)intersectsEntriesFromDictionary:(id)arg1;	// IMP=0x00000000010f972d
- (void)removeObjectForAction:(SEL)arg1 propertyList:(id)arg2;	// IMP=0x00000000010f96b9
- (void)setObject:(id)arg1 forAction:(SEL)arg2 propertyList:(id)arg3;	// IMP=0x00000000010f9601
- (id)objectForAction:(SEL)arg1 propertyList:(id)arg2;	// IMP=0x00000000010f9577
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010f94da
- (id)init;	// IMP=0x00000000010f9465

@end
