//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol HMDAccessoryBrowserDelegate;

@interface HMDPairedAccessoryInformation : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSData *_setupHash;	// 16 = 0x10
    unsigned long long _transports;	// 24 = 0x18
    id <HMDAccessoryBrowserDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000804101
@property(readonly) __weak id <HMDAccessoryBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) unsigned long long transports; // @synthesize transports=_transports;
@property(readonly) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000804026
- (unsigned long long)hash;	// IMP=0x0000000000803fe2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000803f0d
- (id)initWithIdentifier:(id)arg1 transports:(unsigned long long)arg2 setupHash:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000803e24
- (id)init;	// IMP=0x0000000000803d7c

@end
