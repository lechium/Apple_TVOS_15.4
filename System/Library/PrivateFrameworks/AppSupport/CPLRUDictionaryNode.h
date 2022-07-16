//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPLRUDictionaryNode : NSObject
{
    id _key;	// 8 = 0x8
    id _object;	// 16 = 0x10
    CPLRUDictionaryNode *next;	// 24 = 0x18
    CPLRUDictionaryNode *prev;	// 32 = 0x20
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) id key; // @synthesize key=_key;
- (void)dealloc;	// IMP=0x000000000001dbaa
- (id)initWithKey:(id)arg1 object:(id)arg2;	// IMP=0x000000000001db41

@end

