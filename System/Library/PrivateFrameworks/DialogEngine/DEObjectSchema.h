//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DEObjectSchema : NSObject
{
    shared_ptr_5311c20d _This;	// 8 = 0x8
}

+ (id)schema:(id)arg1 typeName:(id)arg2;	// IMP=0x00000000002429ca
- (id).cxx_construct;	// IMP=0x0000000000243a25
- (void).cxx_destruct;	// IMP=0x0000000000243a17
@property shared_ptr_5311c20d This; // @synthesize This=_This;
- (id)input:(id)arg1 name:(id)arg2;	// IMP=0x0000000000243631
- (id)inputNames:(id)arg1;	// IMP=0x0000000000243420
- (id)property:(id)arg1 name:(id)arg2;	// IMP=0x000000000024320e
- (id)propertyNames:(id)arg1;	// IMP=0x0000000000242ffd
@property(readonly) NSString *description;
@property(readonly) NSString *baseObject;
@property(readonly) NSString *name;
- (id)initWithPtr:(shared_ptr_5311c20d)arg1;	// IMP=0x00000000002428e2
- (id)init;	// IMP=0x0000000000242810

@end
