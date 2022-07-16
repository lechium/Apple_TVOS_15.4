//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VCConnection : NSObject
{
    unsigned short _linkFlags;	// 8 = 0x8
    unsigned short _remoteLinkFlags;	// 10 = 0xa
    NSDictionary *_connectionSelectionPriorities;	// 16 = 0x10
}

- (id)getConnectionSelectionPriorities;	// IMP=0x00000000000e537d
- (long long)compareIpVersionPriority:(id)arg1 selectionPolicy:(CDStruct_155bd25f *)arg2;	// IMP=0x00000000000e52a0
- (long long)compareE2EPriority:(id)arg1 selectionPolicy:(CDStruct_155bd25f *)arg2;	// IMP=0x00000000000e5224
- (long long)compareVpnPriority:(id)arg1 selectionPolicy:(CDStruct_155bd25f *)arg2;	// IMP=0x00000000000e51ad
- (long long)compareConnectionTypePriority:(id)arg1 selectionPolicy:(CDStruct_155bd25f *)arg2;	// IMP=0x00000000000e50d1
- (long long)compareInterfacePriority:(id)arg1 isPrimary:(_Bool)arg2;	// IMP=0x00000000000e4eda
- (long long)compare:(id)arg1 isPrimary:(_Bool)arg2 selectionPolicy:(CDStruct_155bd25f *)arg3;	// IMP=0x00000000000e4c97
- (void)setRemoteLinkFlags:(unsigned short)arg1;	// IMP=0x00000000000e4bbe
- (void)setLinkFlags:(unsigned short)arg1;	// IMP=0x00000000000e4ae5
- (void)dealloc;	// IMP=0x00000000000e4a87
- (id)init;	// IMP=0x00000000000e4a0b

@end
