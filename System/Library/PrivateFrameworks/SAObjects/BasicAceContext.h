//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SAObjects/AceContext-Protocol.h>

@class NSString;

@interface BasicAceContext : NSObject <AceContext>
{
}

+ (id)sharedBasicAceContext;	// IMP=0x0000000000005d1c
- (id)aceObjectWithDictionary:(id)arg1;	// IMP=0x0000000000005dd3
- (Class)classWithClassName:(id)arg1 group:(id)arg2;	// IMP=0x0000000000005dba
- (void)registerGroupAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2;	// IMP=0x0000000000005da1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

