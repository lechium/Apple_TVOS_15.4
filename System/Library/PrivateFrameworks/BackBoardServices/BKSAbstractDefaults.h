//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface BKSAbstractDefaults : NSObject <BSDescriptionProviding>
{
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000004d6b7
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000004d667
- (id)succinctDescriptionBuilder;	// IMP=0x000000000004d64b
- (id)succinctDescription;	// IMP=0x000000000004d5fb
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

