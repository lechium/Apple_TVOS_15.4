//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIAction-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAction : NSObject <VUIAction>
{
}

+ (id)actionWithDictionary:(id)arg1 appContext:(id)arg2;	// IMP=0x00000000000b6f77
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b73f8
- (_Bool)isAccountRequired;	// IMP=0x00000000000b73f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

