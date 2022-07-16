//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VSBinder : NSObject
{
    _Bool _establishmentProhibited;	// 8 = 0x8
    id _boundObject;	// 16 = 0x10
    NSCountedSet *_currentlyChangingBindings;	// 24 = 0x18
    NSMutableDictionary *_establishedBindings;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003a870
@property(retain, nonatomic) NSMutableDictionary *establishedBindings; // @synthesize establishedBindings=_establishedBindings;
@property(retain, nonatomic) NSCountedSet *currentlyChangingBindings; // @synthesize currentlyChangingBindings=_currentlyChangingBindings;
@property(nonatomic, getter=isEstablishmentProhibited) _Bool establishmentProhibited; // @synthesize establishmentProhibited=_establishmentProhibited;
@property(readonly, nonatomic) __weak id boundObject; // @synthesize boundObject=_boundObject;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000003a33e
- (void)setValue:(id)arg1 forBinding:(id)arg2;	// IMP=0x000000000003a1a3
- (id)valueForBinding:(id)arg1;	// IMP=0x0000000000039fc7
- (void)tearDownBinding:(id)arg1;	// IMP=0x0000000000039a22
- (void)establishBinding:(id)arg1 withInfo:(id)arg2;	// IMP=0x000000000003977d
- (id)_infoForBinding:(id)arg1;	// IMP=0x00000000000396a9
- (void)dealloc;	// IMP=0x00000000000394c1
- (id)initWithBoundObject:(id)arg1;	// IMP=0x00000000000393f8
- (id)init;	// IMP=0x0000000000039389

@end
