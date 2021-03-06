//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSOperationDependencies, NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface CKKSFixupResaveDeviceStateEntriesOperation
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    CKKSOperationDependencies *_deps;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001574aa
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)groupStart;	// IMP=0x001000000015723e
- (id)description;	// IMP=0x00100000001571b1
- (id)initWithOperationDependencies:(id)arg1;	// IMP=0x0010000000157117

@end

