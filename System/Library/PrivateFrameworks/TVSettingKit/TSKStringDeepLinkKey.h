//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVSettingKit/TSKDynamicDeepLinkKey-Protocol.h>

@class NSString;

@interface TSKStringDeepLinkKey : NSObject <TSKDynamicDeepLinkKey>
{
    NSString *_string;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001da90
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (_Bool)acceptsDeepLinkPathComponent:(id)arg1;	// IMP=0x000000000001da00
- (id)initWithString:(id)arg1;	// IMP=0x000000000001d6f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

