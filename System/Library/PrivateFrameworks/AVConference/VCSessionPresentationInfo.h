//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCSessionPresentationInfo : NSObject <NSSecureCoding>
{
    unsigned int _displayID;	// 8 = 0x8
    struct CGSize _displaySize;	// 16 = 0x10
    struct CGRect _appWindowRect;	// 32 = 0x20
    unsigned int _uiLayout;	// 64 = 0x40
    unsigned char _uiState;	// 68 = 0x44
    _Bool _hasPendingChanges;	// 69 = 0x45
    struct tagVCSpatialAudioMetadataGlobalInfo _metadataGlobalInfo;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003577e5
+ (unsigned int)metadataSateWithUIState:(unsigned char)arg1;	// IMP=0x0000000000357223
+ (unsigned char)avcUIStateWithUIState:(unsigned char)arg1;	// IMP=0x0000000000357204
+ (unsigned char)uiStateWithAVCUIState:(unsigned char)arg1;	// IMP=0x00000000003571e5
+ (unsigned int)avcLayoutWithLayout:(unsigned int)arg1;	// IMP=0x00000000003571dd
+ (unsigned int)layoutWithAVCLayout:(unsigned int)arg1;	// IMP=0x00000000003571d5
@property(readonly, nonatomic) unsigned char uiState; // @synthesize uiState=_uiState;
@property(readonly, nonatomic) _Bool hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000357905
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003577ed
@property(readonly, nonatomic) const struct tagVCSpatialAudioMetadataGlobalInfo *metadataGlobalInfo;
@property(nonatomic) struct tagAVCSessionPresentationInfo avcSessionPresentationInfo;
- (void)unserialize:(id)arg1;	// IMP=0x00000000003572f3
- (id)serialize;	// IMP=0x0000000000357231
- (void)setDisplayID:(unsigned int)arg1;	// IMP=0x000000000035715a
- (id)description;	// IMP=0x0000000000357115
- (id)init;	// IMP=0x0000000000357099

@end

