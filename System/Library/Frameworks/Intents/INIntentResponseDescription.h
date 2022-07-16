//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INIntentResponseDescriptionExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface INIntentResponseDescription : NSObject <INIntentResponseDescriptionExport, NSCopying>
{
    _Bool _isPrivate;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    Class _facadeClass;	// 24 = 0x18
    Class _dataClass;	// 32 = 0x20
    NSString *_type;	// 40 = 0x28
    NSDictionary *_slotsByName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001fb360
@property(readonly, copy, nonatomic) NSDictionary *slotsByName; // @synthesize slotsByName=_slotsByName;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) Class dataClass; // @synthesize dataClass=_dataClass;
@property(readonly, nonatomic) Class facadeClass; // @synthesize facadeClass=_facadeClass;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fb31a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fb23a
@property(readonly) unsigned long long hash;
- (id)initWithName:(id)arg1 facadeClass:(Class)arg2 dataClass:(Class)arg3 type:(id)arg4 isPrivate:(_Bool)arg5 slotsByName:(id)arg6;	// IMP=0x00000000001fb067

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

