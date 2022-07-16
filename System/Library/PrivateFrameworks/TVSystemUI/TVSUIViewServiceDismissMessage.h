//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVSystemUI/TVSUIViewServiceMessageCodable-Protocol.h>

@class NSArray, NSString;

@interface TVSUIViewServiceDismissMessage : NSObject <TVSUIViewServiceMessageCodable>
{
    NSArray *_items;	// 8 = 0x8
    long long _origin;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001b156
@property(readonly, nonatomic) long long origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)encodeToItems:(id)arg1;	// IMP=0x000000000001afd0
- (id)initFromItems:(id)arg1;	// IMP=0x000000000001ae77
- (id)initWithItems:(id)arg1 origin:(long long)arg2;	// IMP=0x000000000001adf9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

