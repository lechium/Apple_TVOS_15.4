//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface XCTDDiagnosticsProvider : NSObject
{
    NSDictionary *_requestTypeRegistry;	// 8 = 0x8
}

+ (void)provideCapabilitiesToBuilder:(id)arg1;	// IMP=0x0020000000017c39
+ (id)logDirectory;	// IMP=0x0010000000017ae6
- (void).cxx_destruct;	// IMP=0x0020000000018708
@property(readonly, copy) NSDictionary *requestTypeRegistry; // @synthesize requestTypeRegistry=_requestTypeRegistry;
- (void)requestTailspinWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000183df
- (void)requestSpindumpWithSpecification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000180c4
- (void)requestLogArchiveForUser:(unsigned int)arg1 startDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000017c55
- (id)init;	// IMP=0x0010000000017b6d
- (id)initWithRequestTypeRegistry:(id)arg1;	// IMP=0x0010000000017af0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

