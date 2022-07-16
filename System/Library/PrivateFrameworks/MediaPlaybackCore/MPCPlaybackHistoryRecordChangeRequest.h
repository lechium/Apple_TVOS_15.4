//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class MPModelGenericObject, MPModelPlayEvent;

__attribute__((visibility("hidden")))
@interface MPCPlaybackHistoryRecordChangeRequest : NSObject <NSCopying>
{
    _Bool _allowsStoreContainerImport;	// 8 = 0x8
    MPModelPlayEvent *_playEvent;	// 16 = 0x10
    MPModelGenericObject *_itemGenericObject;	// 24 = 0x18
    long long _type;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000019fea9
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) MPModelGenericObject *itemGenericObject; // @synthesize itemGenericObject=_itemGenericObject;
@property(retain, nonatomic) MPModelPlayEvent *playEvent; // @synthesize playEvent=_playEvent;
@property(nonatomic) _Bool allowsStoreContainerImport; // @synthesize allowsStoreContainerImport=_allowsStoreContainerImport;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000019fde5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019fd92

@end

