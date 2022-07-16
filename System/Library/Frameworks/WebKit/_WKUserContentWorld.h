//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface _WKUserContentWorld : NSObject <WKObject>
{
    struct RetainPtr<WKContentWorld> _contentWorld;	// 8 = 0x8
}

+ (id)normalWorld;	// IMP=0x00000000002a6fed
+ (id)worldWithName:(id)arg1;	// IMP=0x00000000002a6faf
- (id).cxx_construct;	// IMP=0x00000000002a706a
- (void).cxx_destruct;	// IMP=0x00000000002a704a
@property(readonly) struct Object *_apiObject;
@property(readonly, copy, nonatomic) NSString *name;
- (id)_initWithContentWorld:(id)arg1;	// IMP=0x00000000002a6f4d
- (id)_init;	// IMP=0x00000000002a6ed7
- (id)_initWithName:(id)arg1;	// IMP=0x00000000002a6e5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

