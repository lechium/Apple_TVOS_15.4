//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PineBoardServices/NSCopying-Protocol.h>
#import <PineBoardServices/NSSecureCoding-Protocol.h>

@class PBSDisplayMode;

@interface PBSDisplayAssistantPresentationRequest : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _shouldEnableEARC;	// 8 = 0x8
    PBSDisplayMode *_sourceDisplayMode;	// 16 = 0x10
    PBSDisplayMode *_destinationDisplayMode;	// 24 = 0x18
    long long _kind;	// 32 = 0x20
    long long _source;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007e1c0
+ (id)eARCRequestFromSource:(long long)arg1 shouldEnable:(_Bool)arg2;	// IMP=0x000000000007dd70
+ (id)cableCheckRequestFromSource:(long long)arg1;	// IMP=0x000000000007db50
+ (id)upgradeAttemptRequestFromSource:(long long)arg1;	// IMP=0x000000000007d8f0
- (void).cxx_destruct;	// IMP=0x000000000007eca0
@property(nonatomic) _Bool shouldEnableEARC; // @synthesize shouldEnableEARC=_shouldEnableEARC;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) long long kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) PBSDisplayMode *destinationDisplayMode; // @synthesize destinationDisplayMode=_destinationDisplayMode;
@property(readonly, nonatomic) PBSDisplayMode *sourceDisplayMode; // @synthesize sourceDisplayMode=_sourceDisplayMode;
- (id)description;	// IMP=0x000000000007ea70
- (unsigned long long)hash;	// IMP=0x000000000007e970
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007e640
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007e520
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007e3a0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007e1e0
- (id)initWithDestinationDisplayMode:(id)arg1 kind:(long long)arg2 source:(long long)arg3;	// IMP=0x000000000007e0c0
- (id)initWithSourceDisplayMode:(id)arg1 destinationDisplayMode:(id)arg2 kind:(long long)arg3 source:(long long)arg4;	// IMP=0x000000000007dfe0
- (id)initWithSourceDisplayMode:(id)arg1 destinationDisplayMode:(id)arg2 kind:(long long)arg3 source:(long long)arg4 shouldEnableEARC:(_Bool)arg5;	// IMP=0x000000000007de40

@end
