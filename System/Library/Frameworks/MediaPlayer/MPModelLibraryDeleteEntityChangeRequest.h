//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPModelObject;

@interface MPModelLibraryDeleteEntityChangeRequest : NSObject <NSCopying>
{
    MPModelObject *_modelObject;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001cea1
@property(retain, nonatomic) MPModelObject *modelObject; // @synthesize modelObject=_modelObject;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ce08
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001cda0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001cd69

@end

