//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

#import <TVMLKit/TVScreenSaverJSObject-Protocol.h>

__attribute__((visibility("hidden")))
@interface TVScreenSaverJSObject : IKJSObject <TVScreenSaverJSObject>
{
}

- (void)requestImagesWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a4bb
- (id)getScreenSaverInfo;	// IMP=0x000000000004a464
- (id)getScreenSaverName;	// IMP=0x000000000004a40d
- (_Bool)isCurrentScreenSaver;	// IMP=0x000000000004a3c2
- (void)setScreenSaver:(id)arg1:(id)arg2;	// IMP=0x000000000004a316

@end
