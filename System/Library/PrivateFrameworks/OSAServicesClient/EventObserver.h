//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OSADiagnosticEventObserver;

@interface EventObserver : NSObject
{
    id <OSADiagnosticEventObserver> _observer;	// 8 = 0x8
    NSSet *_bugTypes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000018ff
@property(readonly, nonatomic) NSSet *bugTypes; // @synthesize bugTypes=_bugTypes;
@property(readonly, nonatomic) __weak id <OSADiagnosticEventObserver> observer; // @synthesize observer=_observer;
- (void)deliverEvent:(id)arg1 on:(id)arg2;	// IMP=0x000000000000168a
- (_Bool)matches:(id)arg1;	// IMP=0x000000000000162c
- (id)initWithObserver:(id)arg1 bugTypes:(id)arg2;	// IMP=0x0000000000001579

@end
