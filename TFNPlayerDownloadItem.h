//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@interface TFNPlayerDownloadItem
{
}

+ (unsigned long long)maxCacheSize;
+ (unsigned long long)currentCacheSize;
+ (void)clearAllCacheEntries;
+ (void)storePlayerFileURL:(id)arg1 copyingFile:(_Bool)arg2 forDownloadURL:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)playerDownloadItemWithSourceURL:(id)arg1 cacheLookupAlternateURLs:(id)arg2;

@end
