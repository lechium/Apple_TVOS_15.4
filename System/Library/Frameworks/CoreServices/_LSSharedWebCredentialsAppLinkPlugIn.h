//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSSharedWebCredentialsAppLinkPlugIn
{
}

- (id)appLinksWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x0000000000046e59
- (id)callingBundleIdentifier;	// IMP=0x0000000000046dee
- (id)appLinksWithContext:(struct LSContext *)arg1 forSWCResults:(id)arg2;	// IMP=0x000000000004672a
- (void)enumerateBindingsWithContext:(struct LSContext *)arg1 forSWCResults:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000462ed
- (optional_430a8fae)bindingWithContext:(struct LSContext *)arg1 forServiceDetails:(id)arg2 callingBundleIdentifier:(id)arg3;	// IMP=0x0000000000045d4e
- (id)init;	// IMP=0x0000000000045ce0

@end
