//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSKeyedArchiverDelegate-Protocol.h>

@class NSString;

@interface SKFrameCaptureDelegate : NSObject <NSKeyedArchiverDelegate>
{
}

+ (id)sharedInstance;	// IMP=0x00000000000bdff8
- (void)archiver:(id)arg1 didEncodeObject:(id)arg2;	// IMP=0x00000000000be0bc
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;	// IMP=0x00000000000be062

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
