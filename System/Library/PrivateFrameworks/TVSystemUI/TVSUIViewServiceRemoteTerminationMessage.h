//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVSystemUI/TVSUIViewServiceMessageCodable-Protocol.h>

@class NSString;

@interface TVSUIViewServiceRemoteTerminationMessage : NSObject <TVSUIViewServiceMessageCodable>
{
}

- (void)encodeToItems:(id)arg1;	// IMP=0x000000000001b4cc
- (id)initFromItems:(id)arg1;	// IMP=0x000000000001b3d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

