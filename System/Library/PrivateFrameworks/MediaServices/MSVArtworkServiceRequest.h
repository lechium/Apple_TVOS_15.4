//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaServices/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSMutableDictionary;

@interface MSVArtworkServiceRequest : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_sandboxExtensions;	// 8 = 0x8
    NSMutableArray *_sandboxHandles;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007176
- (void).cxx_destruct;	// IMP=0x000000000000714e
@property(readonly, nonatomic) long long operationPriority;
@property(readonly, nonatomic) Class operationClass;
- (void)releaseSandboxExtensions;	// IMP=0x0000000000006f98
- (void)consumeSandboxExtensions;	// IMP=0x0000000000006dc4
- (void)addSandboxExtensionIfNeededForURL:(id)arg1;	// IMP=0x0000000000006c42
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006bd4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006a6b
- (id)init;	// IMP=0x00000000000069d1

@end

